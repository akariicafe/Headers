@class NSArray, NSString, NSDateInterval;

@interface PXCuratedLibraryVisibleContentSnapshot : NSObject <PXBrowserVisibleContentSnapshot> {
    id /* block */ _dateIntervalFuture;
    id /* block */ _locationNamesFuture;
    long long _dataSourceIdentifier;
    BOOL _isFiltering;
}

@property (readonly, nonatomic) NSDateInterval *dateInterval;
@property (readonly, nonatomic) NSArray *locationNames;
@property (readonly, nonatomic) unsigned long long dateIntervalGranularity;
@property (readonly, nonatomic) NSString *localizedPlaceholderText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithLibraryLayout:(id)a0 dateType:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)init;

@end
