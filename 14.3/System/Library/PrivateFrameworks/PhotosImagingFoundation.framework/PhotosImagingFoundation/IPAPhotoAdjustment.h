@class NSString, NSDictionary;

@interface IPAPhotoAdjustment : IPAAdjustment

@property (nonatomic) BOOL enabled;
@property (retain, nonatomic) NSString *maskUUID;
@property (retain, nonatomic) NSDictionary *autoSettings;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_debugDescriptionSuffix;

@end
