@class NSString, NSDictionary, NSURL, SFActionItem, NSData;

@interface SFTrack : NSObject <SFTrack, NSSecureCoding, NSCopying> {
    struct { unsigned char highlighted : 1; } _has;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *number;
@property (copy, nonatomic) NSString *duration;
@property (nonatomic) BOOL highlighted;
@property (copy, nonatomic) NSURL *preview;
@property (retain, nonatomic) SFActionItem *playAction;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) NSData *jsonData;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithProtobuf:(id)a0;
- (void).cxx_destruct;
- (BOOL)hasHighlighted;

@end
