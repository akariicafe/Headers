@class NSArray, NSString;

@interface SHSheetViewModel : NSObject <SHSheetViewModelInterface>

@property (readonly, copy, nonatomic) NSArray *peopleSuggestions;
@property (readonly, copy, nonatomic) NSArray *activities;
@property (readonly, copy, nonatomic) NSArray *metadataValues;
@property (nonatomic) BOOL showOptions;
@property (copy, nonatomic) NSArray *restrictedActivityTypes;
@property (retain, nonatomic) NSString *customOptionsTitle;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithPeopleSuggestions:(id)a0 activities:(id)a1 metadataValues:(id)a2;
- (void).cxx_destruct;

@end
