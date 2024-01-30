@class NSString, NSObject;
@protocol CRKArrayDifferenceConfiguration;

@interface CRKArrayDifferenceEngine : NSObject {
    NSObject *mObject;
    NSString *mKeyPath;
}

@property (retain, nonatomic) id<CRKArrayDifferenceConfiguration> configuration;

+ (id)identityConfiguration;
+ (id)configurationWithIncomingItemsIdentifierFunction:(id /* block */)a0 publishedItemsIdentifierFunction:(id /* block */)a1;

- (void).cxx_destruct;
- (id)initWithObject:(id)a0 keyPath:(id)a1 configuration:(id)a2;
- (void)updateWithNewArray:(id)a0;

@end
