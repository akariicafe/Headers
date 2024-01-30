@class NSString, NSURL, NSData, NSNumber;

@interface EDRichLinkData : NSObject

@property (readonly, nonatomic) NSNumber *persistentID;
@property (readonly, nonatomic) NSString *title;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) NSData *data;

- (void).cxx_destruct;
- (id)initWithPersistentID:(id)a0 title:(id)a1 url:(id)a2 data:(id)a3;
- (id)initWithTitle:(id)a0 url:(id)a1 data:(id)a2;

@end
