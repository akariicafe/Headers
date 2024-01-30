@class NSUUID, NSString, NSURL;

@interface WBSBrowserTabCompletionInfo : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (readonly, nonatomic) NSUUID *tabGroupUUID;
@property (readonly, copy, nonatomic) NSString *tabGroupTitle;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, nonatomic) long long pageStatus;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 windowUUID:(id)a1 tabGroupUUID:(id)a2 tabGroupTitle:(id)a3 tabIndex:(unsigned long long)a4 url:(id)a5 title:(id)a6 pageStatus:(long long)a7;
- (id)initWithUUID:(id)a0 windowUUID:(id)a1 tabIndex:(unsigned long long)a2 url:(id)a3 title:(id)a4;

@end
