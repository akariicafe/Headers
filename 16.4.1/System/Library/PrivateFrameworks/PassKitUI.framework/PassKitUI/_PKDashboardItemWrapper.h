@class NSString;
@protocol NSCopying, PKDashboardItem;

@interface _PKDashboardItemWrapper : NSObject <PKIdentifiable>

@property (retain, nonatomic) id<PKDashboardItem> wrappedItem;
@property (readonly, nonatomic) id<NSCopying> identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithDashboardItem:(id)a0;

@end
