@class NSString;

@interface BBDismissalDictionaryAndFeeds : BBDismissalItem

@property (readonly, nonatomic) double dismissalTimeInterval;
@property (readonly, copy, nonatomic) NSString *dismissalHash;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDismissalDictionary:(id)a0 andFeeds:(unsigned long long)a1;
- (BOOL)matchDismissalDictionary:(id)a0;

@end
