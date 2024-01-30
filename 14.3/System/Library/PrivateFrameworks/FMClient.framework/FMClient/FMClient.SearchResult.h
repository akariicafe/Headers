@class NSArray, NSString;

@interface FMClient.SearchResult : NSObject <NSSecureCoding> {
    void /* unknown type, empty encoding */ devices;
}

@property (class, nonatomic, readonly) BOOL supportsSecureCoding;

@property (nonatomic, copy) NSArray *devices;
@property (nonatomic) void /* unknown type, empty encoding */ resultCode;
@property (nonatomic, readonly) NSString *debugDescription;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;

@end
