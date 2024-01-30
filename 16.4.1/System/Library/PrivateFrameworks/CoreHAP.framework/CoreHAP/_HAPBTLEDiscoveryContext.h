@class NSMutableArray, NSMapTable;

@interface _HAPBTLEDiscoveryContext : HMFObject

@property (readonly, nonatomic) long long discoveryType;
@property (readonly, nonatomic) NSMutableArray *discoveringServices;
@property (readonly, nonatomic) NSMutableArray *discoveringCharacteristics;
@property (readonly, nonatomic) NSMutableArray *readingCharacteristics;
@property (readonly, nonatomic) NSMutableArray *discoveringDescriptors;
@property (readonly, nonatomic) NSMutableArray *readingDescriptors;
@property (readonly, nonatomic) NSMutableArray *readingSignatureCharacteristics;
@property (readonly, nonatomic) NSMutableArray *readingSignatureServices;
@property (readonly, nonatomic) NSMapTable *characteristicSignatures;
@property (readonly, nonatomic) NSMapTable *serviceSignatures;
@property (nonatomic, getter=isDiscovering) BOOL discovering;
@property (readonly, nonatomic, getter=isComplete) BOOL complete;
@property (copy, nonatomic) id /* block */ completionHandler;

- (id)init;
- (void).cxx_destruct;
- (void)reset;
- (id)initWithDiscoveryType:(long long)a0;

@end
