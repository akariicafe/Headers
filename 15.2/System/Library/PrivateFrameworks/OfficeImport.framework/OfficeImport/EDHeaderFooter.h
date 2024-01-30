@class NSString;

@interface EDHeaderFooter : NSObject {
    NSString *mHeaderString;
    NSString *mFooterString;
}

+ (id)headerFooter;

- (id)description;
- (id)headerString;
- (void).cxx_destruct;
- (void)setHeaderString:(id)a0;
- (void)setFooterString:(id)a0;
- (id)footerString;

@end
