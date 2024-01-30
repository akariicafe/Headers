@class NSData, NSString;

@interface _SBSCarPlayApplicationInfo : NSObject <SBSCarPlayApplicationIcon>

@property (retain, nonatomic) NSData *iconImageData;
@property (nonatomic) double iconImageScale;
@property (retain, nonatomic) NSString *localizedDisplayName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
