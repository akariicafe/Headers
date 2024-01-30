@class NSString, NSArray;

@interface HRUITableViewSection : NSObject {
    void /* unknown type, empty encoding */ identifier;
    void /* unknown type, empty encoding */ headerString;
    void /* unknown type, empty encoding */ footerString;
    void /* unknown type, empty encoding */ rows;
}

@property (nonatomic, copy) NSString *identifier;
@property (nonatomic, copy) NSString *headerString;
@property (nonatomic, copy) NSString *footerString;
@property (nonatomic, copy) NSArray *rows;
@property (nonatomic, retain) void /* unknown type, empty encoding */ estimatedNumRows;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)addRow:(id)a0;
- (void)addRowForReuseIdentifier:(id)a0;

@end
