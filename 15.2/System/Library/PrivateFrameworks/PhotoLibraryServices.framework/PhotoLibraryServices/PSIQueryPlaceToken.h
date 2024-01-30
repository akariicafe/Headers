@class NSDictionary;

@interface PSIQueryPlaceToken : PSIQueryToken {
    NSDictionary *_locationNameByCategory;
}

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)parentToken;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithText:(id)a0 locationNameByCategory:(id)a1;

@end
