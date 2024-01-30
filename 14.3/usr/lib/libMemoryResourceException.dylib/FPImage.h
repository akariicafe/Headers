@class NSString;

@interface FPImage : NSObject

@property (nonatomic) unsigned char segment;
@property (nonatomic) unsigned long long start;
@property (nonatomic) unsigned long long size;
@property (readonly, nonatomic) unsigned long long end;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ownerPath;

- (void).cxx_destruct;

@end
