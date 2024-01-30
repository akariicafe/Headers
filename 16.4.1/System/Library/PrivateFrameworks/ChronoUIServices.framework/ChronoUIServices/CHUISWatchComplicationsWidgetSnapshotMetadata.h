@class NSArray, NSString, CHSGaugeParameters, NSData, UIImage;

@interface CHUISWatchComplicationsWidgetSnapshotMetadata : NSObject <NSCopying, NSMutableCopying, BSXPCSecureCoding>

@property (readonly, copy, nonatomic) NSArray *text;
@property (readonly, copy, nonatomic) NSArray *images;
@property (readonly, copy, nonatomic) CHSGaugeParameters *gauge;
@property (readonly, copy, nonatomic) NSData *gaugeProviderData;
@property (readonly, copy, nonatomic) NSData *gaugeLowerTextProviderData;
@property (readonly, copy, nonatomic) NSData *gaugeUpperTextProviderData;
@property (readonly, nonatomic) UIImage *image;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)supportsBSXPCSecureCoding;

- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)initWithBSXPCCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithBSXPCCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)_initWithSnapshotMetadata:(id)a0;
- (id)copyForEncodingAtUrl:(id)a0;

@end
