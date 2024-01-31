@class NSString;

@interface AVRoutingConfiguration : NSObject {
    BOOL _isDefault;
}

@property (readonly, nonatomic) NSString *outputContextID;
@property (readonly, nonatomic) unsigned long long sharingPolicy;

+ (id)defaultConfiguration;
+ (id)configurationWithOutputContextID:(id)a0 sharingPolicy:(unsigned long long)a1;

- (BOOL)isDefault;
- (void).cxx_destruct;

@end
