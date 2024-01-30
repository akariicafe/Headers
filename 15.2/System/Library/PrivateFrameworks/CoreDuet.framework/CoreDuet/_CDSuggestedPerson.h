@class NSString, NSArray, _CDContact;

@interface _CDSuggestedPerson : NSObject

@property (retain) NSString *interactionBundleID;
@property double rank;
@property double score;
@property (retain) NSArray *interactions;
@property (retain) _CDContact *contact;

- (id)description;
- (void).cxx_destruct;

@end
