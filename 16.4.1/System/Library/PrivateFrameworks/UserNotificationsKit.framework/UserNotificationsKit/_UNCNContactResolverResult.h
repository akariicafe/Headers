@class NSString;

@interface _UNCNContactResolverResult : NSObject <BSDescriptionProviding>

@property (readonly, copy, nonatomic) NSString *cnContactIdentifier;
@property (readonly, copy, nonatomic) NSString *cnContactFullname;
@property (readonly, nonatomic, getter=isSuggestedContact) BOOL suggestedContact;
@property (readonly, nonatomic) unsigned long long matchType;
@property (readonly, nonatomic, getter=isMatchTypeSuggested) BOOL matchTypeSuggested;
@property (readonly, copy, nonatomic) NSString *identifierOfMatchLabel;
@property (readonly, nonatomic, getter=isStrongestMatch) BOOL strongestMatch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)resultWithCNContactIdentifier:(id)a0 cnContactFullname:(id)a1 suggestedContact:(BOOL)a2 matchType:(unsigned long long)a3 matchTypeSuggested:(BOOL)a4 identifierOfMatchLabel:(id)a5;

- (id)descriptionBuilderWithMultilinePrefix:(id)a0;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
- (id)descriptionWithMultilinePrefix:(id)a0;
- (void).cxx_destruct;
- (id)_initWithCNContactIdentifier:(id)a0 cnContactFullname:(id)a1 suggestedContact:(BOOL)a2 matchType:(unsigned long long)a3 matchTypeSuggested:(BOOL)a4 identifierOfMatchLabel:(id)a5;
- (id)_stringForMatchType:(unsigned long long)a0;
- (BOOL)isStrongerMatchThanOtherMatch:(id)a0;

@end
