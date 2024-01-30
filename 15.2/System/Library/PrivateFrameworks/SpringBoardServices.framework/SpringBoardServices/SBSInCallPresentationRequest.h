@interface SBSInCallPresentationRequest : NSObject

+ (void)performPresentationWithConfiguration:(id)a0 completion:(id /* block */)a1;
+ (id)identifiersForRequestedPresentations;
+ (void)notePresentationEndForRequestWithIdentifier:(id)a0;

@end
