@class NSString, NSArray;

@interface TVRemoteActionGroup : NSObject <TVRemoteItem>

@property (copy, nonatomic) NSString *remoteItemTitle;
@property (nonatomic) long long icon;
@property (retain, nonatomic) NSArray *remoteItems;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)groupWithTitle:(id)a0 icon:(long long)a1 items:(id)a2;

@end
