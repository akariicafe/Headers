@class NSString;

@interface INSDeviceInfo : NSObject <INSDeviceInfoMutating>

@property (copy, nonatomic) NSString *mutableAceVersion;
@property (readonly, nonatomic) NSString *aceVersion;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)newWithBuilder:(id /* block */)a0;

- (void)setAceVersion:(id)a0;
- (void).cxx_destruct;
- (id)initWithAceVersion:(id)a0;

@end
