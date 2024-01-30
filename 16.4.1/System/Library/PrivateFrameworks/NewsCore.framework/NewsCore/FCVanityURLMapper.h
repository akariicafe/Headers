@class NTPBVanityURLMapping;

@interface FCVanityURLMapper : NSObject

@property (readonly, copy, nonatomic) NTPBVanityURLMapping *vanityURLMapping;

- (id)init;
- (void).cxx_destruct;
- (id)_standardizedInputPathWithPath:(id)a0;
- (id)URLForVanityURL:(id)a0;
- (id)_pathWithTrailingForwardSlashWithPath:(id)a0;
- (void)_setParametersIfNeededWithComponents:(id)a0 parameters:(id)a1;
- (void)_standardizeResultPath:(id)a0;
- (id)_standardizedFragmentWithParameters:(id)a0 fragment:(id)a1;
- (id)_standardizedMappingPathWithPath:(id)a0;
- (id)_standardizedQueryWithParameters:(id)a0 query:(id)a1;
- (id)initWithVanityURLMapping:(id)a0;

@end
