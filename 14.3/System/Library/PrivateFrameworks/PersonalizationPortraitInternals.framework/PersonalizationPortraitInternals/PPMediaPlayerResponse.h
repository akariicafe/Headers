@class NSString, NSNumber;

@interface PPMediaPlayerResponse : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *artist;
@property (retain, nonatomic) NSString *album;
@property (retain, nonatomic) NSString *bundleID;
@property (retain, nonatomic) NSString *playerID;
@property (retain, nonatomic) NSNumber *storeItemID;
@property (nonatomic) unsigned int state;
@property (nonatomic) double duration;

- (void).cxx_destruct;
- (BOOL)isEqualToResponse:(id)a0;

@end
