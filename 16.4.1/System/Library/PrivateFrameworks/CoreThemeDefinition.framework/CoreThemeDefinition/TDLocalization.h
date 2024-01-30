@class NSString;

@interface TDLocalization : NSManagedObject {
    NSString *_name;
    unsigned short _identifier;
}

@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned short identifier;

@end
