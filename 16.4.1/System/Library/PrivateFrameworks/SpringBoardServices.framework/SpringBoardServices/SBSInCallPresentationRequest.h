@interface SBSInCallPresentationRequest : NSObject

+ (id)identifiersForRequestedPresentations;
+ (void)notePresentationEndForRequestWithIdentifier:(id)a0;
+ (void)performPresentationWithConfiguration:(id)a0 completion:(id /* block */)a1;

@end
