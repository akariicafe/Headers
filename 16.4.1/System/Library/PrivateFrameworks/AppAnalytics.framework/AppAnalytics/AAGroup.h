@class NSString, NSDate;

@interface AAGroup : NSObject {
    void /* unknown type, empty encoding */ name;
    void /* unknown type, empty encoding */ startDate;
    void /* unknown type, empty encoding */ contentType;
    void /* unknown type, empty encoding */ count;
}

@property (nonatomic, readonly) NSString *name;
@property (nonatomic, readonly) NSDate *startDate;

- (id)init;
- (void).cxx_destruct;

@end
