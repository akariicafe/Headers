@class NSString, NSDictionary, NSURL, NSData, SFPhotosLibraryImage;

@interface SFMessageAttachment : NSObject <SFMessageAttachment, NSSecureCoding, NSCopying> {
    struct { unsigned char type : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (nonatomic) int type;
@property (copy, nonatomic) NSURL *url;
@property (copy, nonatomic) NSData *linkMetadata;
@property (retain, nonatomic) SFPhotosLibraryImage *photosLibraryImage;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasType;
- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
