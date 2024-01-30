@class NSMutableDictionary;

@interface BSUIDateLabelFactory : NSObject {
    NSMutableDictionary *_recycledLabelsByStyle;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)_purgeRecycledLabels;
- (long long)styleForLabel:(id)a0;
- (id)startLabelWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3 forStyle:(long long)a4;
- (id)endLabelWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3 forStyle:(long long)a4;
- (id)combinedDateLabelWithStartDate:(id)a0 endDate:(id)a1 timeZone:(id)a2 allDay:(BOOL)a3 forStyle:(long long)a4;
- (void)recycleLabel:(id)a0;

@end
