@class NSString;

@interface SLInteractionHandler : NSObject

@property (retain, nonatomic) NSString *appIdentifier;

- (id)fetchAttributionForAttributionIdentifier:(id)a0;
- (void)feedbackForHighlightIdentifier:(id)a0 withType:(unsigned long long)a1 variant:(id)a2 completionBlock:(id /* block */)a3;
- (id)fetchInteractionsWithLimit:(unsigned long long)a0 variant:(id)a1 error:(id *)a2;
- (void)dealloc;
- (id)initWithAppIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
