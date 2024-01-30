@class NSString;

@interface AppStoreKitInternal.Localization : NSObject <AppStoreKitInternal.LocalizationProtocol> {
    void /* unknown type, empty encoding */ locale;
    void /* unknown type, empty encoding */ extendedLocale;
    void /* unknown type, empty encoding */ localizedStringTables;
    void /* unknown type, empty encoding */ dateFormatters;
    void /* unknown type, empty encoding */ dynamicDateFormatters;
    void /* unknown type, empty encoding */ $__lazy_storage_$_relativeDateFormatter;
}

@property (nonatomic, readonly) NSString *identifier;
@property (nonatomic, readonly) NSString *arcadeWordmarkAssetName;

- (id)relativeDate:(id)a0;
- (id)stringWithCounts:(id)a0 :(id)a1;
- (id)formattedCountForPreferredLocale:(id)a0 :(id)a1;
- (id)formatDuration:(long long)a0 :(id)a1;
- (id)timeAgo:(id)a0;
- (id)string:(id)a0;
- (id)formatDateInSentence:(id)a0 :(id)a1 :(id)a2;
- (id)formatDateWithContext:(id)a0 :(id)a1 :(id)a2;
- (id)formattedCount:(id)a0;
- (id)timeAgoWithContext:(id)a0 :(id)a1;
- (id)stringForPreferredLocale:(id)a0 :(id)a1;
- (id)init;
- (id)formatDate:(id)a0 :(id)a1;
- (id)decimal:(id)a0 :(long long)a1;
- (void).cxx_destruct;
- (id)fileSize:(id)a0;
- (id)stringWithCount:(id)a0 :(long long)a1;

@end
