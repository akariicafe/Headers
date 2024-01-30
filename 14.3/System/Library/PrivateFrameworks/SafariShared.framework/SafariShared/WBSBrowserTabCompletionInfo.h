@class NSUUID, NSURL, NSString;

@interface WBSBrowserTabCompletionInfo : NSObject

@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSUUID *windowUUID;
@property (readonly, nonatomic) unsigned long long tabIndex;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSString *title;

- (void).cxx_destruct;
- (id)initWithUUID:(id)a0 windowUUID:(id)a1 tabIndex:(unsigned long long)a2 url:(id)a3 title:(id)a4;

@end
