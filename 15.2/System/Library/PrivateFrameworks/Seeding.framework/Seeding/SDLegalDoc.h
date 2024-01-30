@class NSString;

@interface SDLegalDoc : NSObject

@property long long legal_id;
@property (copy) NSString *title;
@property (copy) NSString *content;

+ (id)legalDocWithID:(long long)a0 title:(id)a1 content:(id)a2;

- (void).cxx_destruct;
- (id)initWithID:(long long)a0 title:(id)a1 content:(id)a2;

@end
