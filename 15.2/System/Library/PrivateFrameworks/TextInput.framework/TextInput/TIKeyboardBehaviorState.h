@interface TIKeyboardBehaviorState : NSObject

@property (nonatomic) BOOL hasInput;
@property (nonatomic) BOOL hasAutocorrection;
@property (nonatomic) BOOL hasCandidates;
@property (nonatomic) BOOL hasCandidateSelected;
@property (nonatomic) BOOL userSelectedCurrentCandidate;
@property (nonatomic) BOOL hasNextPage;
@property (nonatomic) BOOL showsExtendedList;
@property (nonatomic) BOOL followsZhuyin;
@property (nonatomic) BOOL spaceConfirmation;
@property (nonatomic) BOOL showsCandidatesInLayout;
@property (nonatomic) BOOL hardwareKeyboardMode;
@property (nonatomic) BOOL followsIncompleteRomaji;

@end
