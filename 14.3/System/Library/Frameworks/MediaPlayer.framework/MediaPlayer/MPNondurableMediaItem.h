@interface MPNondurableMediaItem : MPMediaItem {
    unsigned long long _persistentID;
}

+ (BOOL)supportsSecureCoding;
+ (BOOL)canFilterByProperty:(id)a0;
+ (id)defaultPropertyValues;

- (id)valueForProperty:(id)a0;
- (void)incrementPlayCount;
- (id)initWithCoder:(id)a0;
- (BOOL)existsInLibrary;
- (id)initWithPersistentID:(unsigned long long)a0;
- (id)valuesForProperties:(id)a0;
- (BOOL)didSkipWithPlayedToTime:(double)a0;
- (void)markNominalAmountHasBeenPlayed;
- (void)incrementSkipCount;
- (void)noteWasPlayedToTime:(double)a0 skipped:(BOOL)a1;
- (void)incrementPlayCountForPlayingToEnd;
- (BOOL)incrementPlayCountForStopTime:(double)a0;
- (void)updateDateAccessedToCurrentDateWithWriteCompletionBlock:(id /* block */)a0;
- (double)nominalHasBeenPlayedThreshold;
- (BOOL)isUsableAsRepresentativeItem;
- (void)enumerateValuesForProperties:(id)a0 usingBlock:(id /* block */)a1;
- (void)setValue:(id)a0 forKey:(id)a1;
- (unsigned long long)persistentID;
- (id)mediaLibrary;
- (void)encodeWithCoder:(id)a0;

@end
