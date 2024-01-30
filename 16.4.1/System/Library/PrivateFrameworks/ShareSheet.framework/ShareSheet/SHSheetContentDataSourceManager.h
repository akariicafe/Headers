@class NSArray, NSMutableSet, SHSheetContentDataSourceState, SHSheetContentDataSource;
@protocol SHSheetContentDataSourceManagerDelegate;

@interface SHSheetContentDataSourceManager : NSObject

@property (retain, nonatomic) SHSheetContentDataSource *dataSource;
@property (retain, nonatomic) SHSheetContentDataSourceState *currentState;
@property (retain, nonatomic) NSMutableSet *suggestLessIdentifiers;
@property (readonly, copy, nonatomic) NSArray *applicationActivities;
@property (readonly, copy, nonatomic) NSArray *heroActionActivityTypes;
@property (weak, nonatomic) id<SHSheetContentDataSourceManagerDelegate> delegate;

+ (id)contentCustomViewUniqueIdentifier;

- (void).cxx_destruct;
- (id)_uniqueIdentifierForSectionIdentifier:(id)a0;
- (id)_updateCurrentStateWithChangeRequest:(id)a0;
- (id)initWithApplicationActivities:(id)a0 heroActionActivityTypes:(id)a1;
- (void)suggestLessPeopleProxyForIdentifier:(id)a0;
- (void)updateWithChangeRequest:(id)a0;

@end
