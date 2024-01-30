@class FFFeatureSetIdentifier, NSArray;

@interface FFFeatureSet : NSObject

@property (readonly, nonatomic) FFFeatureSetIdentifier *identifier;
@property (retain, nonatomic) NSArray *features;

- (id)initWithGroup:(id)a0 set:(id)a1;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;

@end
