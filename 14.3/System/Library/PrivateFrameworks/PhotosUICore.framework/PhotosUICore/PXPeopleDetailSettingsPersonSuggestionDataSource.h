@class NSArray, NSString;

@interface PXPeopleDetailSettingsPersonSuggestionDataSource : NSObject <PXPeopleDetailSettingsDataSource>

@property (retain, nonatomic) NSArray *personSuggestions;
@property (copy, nonatomic) NSString *title;
@property (readonly, nonatomic) unsigned long long numberOfItems;
@property (readonly, nonatomic) BOOL hasMoreDetails;
@property (readonly, nonatomic) long long action;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)personNameAtIndex:(long long)a0;
- (unsigned long long)faceCount:(long long)a0;
- (long long)verifyTypeAtIndex:(long long)a0;
- (id)modelObjectForIndex:(long long)a0;
- (id)initWithTitle:(id)a0 personSuggestions:(id)a1;
- (void)imageAtIndex:(unsigned long long)a0 targetSize:(struct CGSize { double x0; double x1; })a1 withCompletionBlock:(id /* block */)a2;
- (void).cxx_destruct;

@end
