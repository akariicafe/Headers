@class NSString, NSURL, NSData;

@interface MPServerObjectDatabaseAsset : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, copy, nonatomic) NSString *hashedPersonID;
@property (readonly, nonatomic) long long flavor;
@property (readonly, copy, nonatomic) NSURL *url;
@property (readonly, copy, nonatomic) NSData *miniSINF;

- (void).cxx_destruct;
- (id)initWithSQLRowResult:(id)a0;
- (id)initWithIdentifier:(id)a0 hashedPersonID:(id)a1 flavor:(long long)a2 url:(id)a3 miniSINF:(id)a4;
- (id)description;

@end
