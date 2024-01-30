@class NSString, NSTimer, NSDate;
@protocol VUIRentalExpirationLabelDelegate;

@interface VUIRentalExpirationLabel : VUILabel

@property (copy, nonatomic) NSString *locStringPrefix;
@property (retain, nonatomic) NSTimer *expiryUpdateTimer;
@property (nonatomic) BOOL contentIsAvailable;
@property (nonatomic) BOOL forDownload;
@property (nonatomic) BOOL useWarningColor;
@property (copy, nonatomic) NSDate *expirationDate;
@property (weak, nonatomic) id<VUIRentalExpirationLabelDelegate> delegate;

+ (id)labelForRentalExpirationDate:(id)a0 downloadExpirationDate:(id)a1 contentAvailabilityDate:(id)a2 downloadStatus:(unsigned long long)a3;
+ (BOOL)shouldShowLabelForDownloadExpirationDate:(id)a0;
+ (id)labelWithExpirationDate:(id)a0 textLayout:(id)a1 existingLabel:(id)a2 locStringPrefix:(id)a3 forDownload:(BOOL)a4 contentIsAvailable:(BOOL)a5;
+ (id)labelWithTextLayout:(id)a0 existingLabel:(id)a1 locStringPrefix:(id)a2;
+ (id)_calculateExpirationStringForDate:(id)a0 displayWarningColor:(BOOL *)a1 updateInterval:(long long *)a2 locStringPrefix:(id)a3;
+ (id)labelWithExpirationDate:(id)a0 textLayout:(id)a1 existingLabel:(id)a2 locStringPrefix:(id)a3;
+ (id)labelWithExpirationDate:(id)a0 textLayout:(id)a1 existingLabel:(id)a2 locStringPrefix:(id)a3 useWarningColor:(BOOL)a4;
+ (id)calculateExpirationStringForDate:(id)a0 updateInterval:(long long *)a1 locStringPrefix:(id)a2;

- (void).cxx_destruct;
- (void)willMoveToWindow:(id)a0;
- (void)dealloc;
- (void)invalidateTimer;
- (void)_computeExpirationLabel:(id)a0;

@end
