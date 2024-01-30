@class NSString;

@interface _PSPeopleSuggestionsMetricsItemInternal : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ model;
    void /* unknown type, empty encoding */ transportBundleId;
}

@property (nonatomic, readonly) NSString *description;
@property (nonatomic, readonly) NSString *id;
@property (nonatomic, readonly) NSString *model;
@property (nonatomic, readonly) NSString *transportBundleId;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ rank;
@property (nonatomic, readonly) long long hash;

- (BOOL)isEqual:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithId:(id)a0 model:(id)a1 transportBundleId:(id)a2 rank:(unsigned char)a3;

@end
