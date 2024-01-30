@class NSString;

@interface TSPFeatureInfo : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long readVersion;
@property (readonly, nonatomic) unsigned long long writeVersion;

- (id)init;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithIdentifier:(id)a0 readVersion:(unsigned long long)a1 writeVersion:(unsigned long long)a2 validatingValues:(BOOL)a3;

@end
