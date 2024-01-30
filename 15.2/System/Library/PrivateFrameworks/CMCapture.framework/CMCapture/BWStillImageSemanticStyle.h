@class NSString;

@interface BWStillImageSemanticStyle : NSObject <IBPSemanticStyleProperties>

@property (nonatomic) float toneBias;
@property (nonatomic) float warmthBias;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithSemanticStyle:(id)a0;

@end
