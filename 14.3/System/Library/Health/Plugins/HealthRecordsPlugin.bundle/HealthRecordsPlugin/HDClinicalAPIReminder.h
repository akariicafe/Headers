@class HKSource, NSDate;

@interface HDClinicalAPIReminder : NSObject

@property (readonly, copy, nonatomic) HKSource *source;
@property (readonly, copy, nonatomic) NSDate *creationDate;
@property (readonly, copy, nonatomic) NSDate *postDate;
@property (readonly, nonatomic, getter=wasPosted) BOOL posted;

- (id)init;
- (void).cxx_destruct;
- (void)_setCreationDate:(id)a0;
- (void)_setSource:(id)a0;
- (BOOL)isEqualToReminder:(id)a0;
- (id)_init;
- (BOOL)isEqual:(id)a0;
- (void)_setPostDate:(id)a0;
- (id)initWithSource:(id)a0 creationDate:(id)a1 postDate:(id)a2;

@end
