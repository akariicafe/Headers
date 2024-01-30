@class NSArray, _PSPredictionContext, NSString;

@interface FAInviteSuggestions : NSObject <FAInviteSuggesterProtocol>

@property (retain, nonatomic) _PSPredictionContext *context;
@property (retain, nonatomic) NSArray *suggestions;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)fetchFamilyMemberSuggestions;
- (long long)fetchSuggestedInviteTransportForContactId:(id)a0 contactHandles:(id)a1;

@end
