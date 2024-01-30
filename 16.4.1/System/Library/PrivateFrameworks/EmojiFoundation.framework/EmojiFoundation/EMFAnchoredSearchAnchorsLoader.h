@class NSString, NSArray;

@interface EMFAnchoredSearchAnchorsLoader : NSObject

@property (readonly, nonatomic) NSString *localeIdentifier;
@property (readonly, nonatomic) NSArray *leftHandAnchors;
@property (readonly, nonatomic) NSArray *rightHandAnchors;

- (id)initWithLocaleIdentifier:(id)a0;
- (void).cxx_destruct;

@end
