@class NSString, NSData, NSDictionary;

@interface _ANEInMemoryModelDescriptor : NSObject

@property (readonly, copy, nonatomic) NSString *networkTextHash;
@property (readonly, copy, nonatomic) NSString *weightsHash;
@property (readonly, nonatomic) NSString *optionsPlistHash;
@property (readonly, copy, nonatomic) NSData *networkText;
@property (readonly, nonatomic) NSDictionary *weights;
@property (readonly, nonatomic) NSData *optionsPlist;
@property (readonly, nonatomic) BOOL isMILModel;

+ (id)new;
+ (id)modelWithNetworkDescription:(id)a0 weights:(id)a1 optionsPlist:(id)a2;
+ (id)modelWithMILText:(id)a0 weights:(id)a1 optionsPlist:(id)a2;

- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (id)init;
- (void).cxx_destruct;
- (id)hexStringIdentifier;
- (id)initWithNetworkText:(id)a0 weights:(id)a1 optionsPlist:(id)a2 isMILModel:(BOOL)a3;
- (BOOL)isEqualToInMemoryModelDescriptor:(id)a0;

@end
