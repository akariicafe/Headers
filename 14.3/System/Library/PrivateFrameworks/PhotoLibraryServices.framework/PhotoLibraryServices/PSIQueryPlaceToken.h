@class NSDictionary;

@interface PSIQueryPlaceToken : PSIQueryToken {
    NSDictionary *_locationNameByCategory;
}

+ (BOOL)supportsSecureCoding;

- (id)initWithText:(id)a0 locationNameByCategory:(id)a1;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)parentToken;

@end
