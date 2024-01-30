@class NSArray, NSString;

@interface NSSExternalAnalyticsPaneldentifierProvider : NSObject

@property (readonly, copy, nonatomic) NSArray *hostNames;
@property (readonly, nonatomic) NSString *panelIdentifier;

- (void).cxx_destruct;
- (id)panelIdentifierWithHostNames:(id)a0;
- (id)initWithHostNames:(id)a0;

@end
