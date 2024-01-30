@class NSString, MSASAlbum;
@protocol NSObject;

@interface MSASPersonModelItem : NSObject <NSCopying>

@property (nonatomic) int errorCount;
@property (retain, nonatomic) MSASAlbum *album;
@property (retain, nonatomic) NSString *albumGUID;
@property (retain, nonatomic) id<NSObject> object;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
