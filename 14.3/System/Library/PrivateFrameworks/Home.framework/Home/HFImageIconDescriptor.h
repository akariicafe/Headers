@class NSString, UIImageSymbolConfiguration;

@interface HFImageIconDescriptor : NSObject <HFIconDescriptor>

@property (nonatomic) BOOL isDemoModeDescriptor;
@property (readonly, nonatomic) NSString *imageIdentifier;
@property (readonly, nonatomic) UIImageSymbolConfiguration *imageSymbolConfiguration;
@property (readonly, nonatomic) BOOL isSystemImage;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL shouldForceLTR;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (long long)compare:(id)a0;
- (id)initWithImageIdentifier:(id)a0;
- (id)initWithDemoModeImageIdentifier:(id)a0;
- (BOOL)isEqual:(id)a0;
- (id)initWithSystemImageNamed:(id)a0 configuration:(id)a1;
- (id)iconDescriptorByMergingWithIconDescriptor:(id)a0;
- (id)initWithSystemImageNamed:(id)a0;

@end
