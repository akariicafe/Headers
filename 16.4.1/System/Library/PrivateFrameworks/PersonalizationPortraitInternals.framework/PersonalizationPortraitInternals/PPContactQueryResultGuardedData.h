@class NSArray, NSError;

@interface PPContactQueryResultGuardedData : NSObject

@property (retain, nonatomic) NSArray *cnContacts;
@property (retain, nonatomic) NSArray *fiaContacts;
@property (retain, nonatomic) NSError *latestError;
@property (nonatomic) BOOL joined;

- (void).cxx_destruct;

@end
