@class NSNumber, NSString;

@interface ICMusicRestoreRequestParameters : NSObject

@property (readonly, copy, nonatomic) NSNumber *adamID;
@property (readonly, copy, nonatomic) NSNumber *accountID;
@property (readonly, copy, nonatomic) NSNumber *matchStatus;
@property (readonly, copy, nonatomic) NSString *title;
@property (readonly, copy, nonatomic) NSString *storeFrontID;
@property (readonly, copy, nonatomic) NSString *mediaKind;
@property (readonly, copy, nonatomic) NSString *flavor;

- (void).cxx_destruct;
- (id)initWithItemID:(id)a0 title:(id)a1 storeFrontID:(id)a2 mediaKind:(id)a3 accountID:(id)a4 matchStatus:(id)a5 flavor:(id)a6;

@end
