@class NSString, NSArray, SFCommand, NSDictionary, SFImage, NSData;

@interface SFCommandButtonItem : SFButtonItem <SFCommandButtonItem, NSSecureCoding, NSCopying>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) SFImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) SFCommand *command;
@property (copy, nonatomic) NSArray *previewButtonItems;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) unsigned long long uniqueId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
